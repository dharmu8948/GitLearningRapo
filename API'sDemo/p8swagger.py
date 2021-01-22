from flask import Flask, request
from flask_restful import Resource, Api

from flask_limiter.util import get_remote_address
from flask_limiter import Limiter

# from flasgger import Swagger
# from flasgger.utils import swag_form
from flask_restful_swagger import swagger

app = Flask(__name__)
api = Api(app)

limiter = Limiter(app, key_func=get_remote_address)
limiter.init_app(app)

api = swagger.docs(Api(app), apiVersion='2', api_spec_url="/docs")


@app.route('/')
def hello():
    return    '<h1 style="color:blue;text-align:center">please use /doc.html in url for swagger property</h1>'


class MyAPi(Resource):
    decorators = [limiter.limit("3/day")]

    @swagger.model
    @swagger.operation(notes='some really good notes')
    def get(self, zip):
        if len(zip) > 2:
            return {"You sent": zip}
        else:
            return "error"


api.add_resource(MyAPi, '/weather/<string:zip>')

if __name__ == '__main__':
    app.run(debug=True)
