from flask import Flask,render_template

app = Flask(__name__)


@app.route('/')
def home():
    name="Dharmendra Kumar"
    list1 = list(name)
    dict1 = {"Youtube":"WorldWide"}
    return render_template('home.html',name=name,list1=list1,dict1=dict1)
@app.route('/jinja')
def index():
    list1 = [1,2,3,4,5]
    list2 = ["Ram Kumar","Jai Prakash Yadav","Dharmpal","Deepesh Jaiswal","Rahul Rai","Umesh Yadav"]
    return render_template('main.html',list1 = list1,list2=list2)


@app.route('/inheritence')
def inherit():
    return render_template('index.html')


@app.route('/base/<string:name>')
def homer(name):
    return render_template('base.html',name = name)
if __name__ =='__main__':
    app.run(debug=True)