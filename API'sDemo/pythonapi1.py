from flask import Flask
from flask_restful import Resource, Api

app = Flask(__name__)
api = Api(app)


@app.route('/name/<string:name>')
def name(name):
    return f'<h1 style="color:DodgerBlue;">My name is {name}</h1>'


class APIExample(Resource):
    def get(self):
        return {
            'William Shakespeare': {
                'quote': ['Love all,trust a few,do wrong to none',
                          'Some are born great, some achieve greatness, and some greatness thrust upon them.']
            },
            'Linus': {
                'quote': ['Talk is cheap. Show me the code.']
            }
        }


api.add_resource(APIExample, '/')

if __name__ == '__main__':
    app.run(debug=True)
