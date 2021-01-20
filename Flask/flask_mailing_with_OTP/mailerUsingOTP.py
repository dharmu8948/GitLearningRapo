
# firstly we have to enable less security for perticuler google account

from flask import *
from flask_mail import *
from random import *

app = Flask(__name__)

mail = Mail(app)

app.config.update(
    MAIL_SERVER='smtp.gmail.com',
    MAIL_PORT=465,
    MAIL_USE_SSL=True,
    MAIL_USERNAME='d*******@gmail.com',
    MAIL_PASSWORD='*************'
)
mail = Mail(app)
otp = randint(000000, 999999)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/verify', methods=["POST"])
def verify():
    email = request.form["email"]

    msg = Message('OTP', sender='d**********@gmail.com', recipients=[email])
    msg.body = str(otp)
    mail.send(msg)
    return render_template('verify.html')


@app.route('/validate', methods=["POST"])
def validate():
    user_otp = request.form['otp']
    if otp == int(user_otp):
        return '<h2>Email verified successfully</h2>'
    return '<h3>failure</h3>'


if __name__ == '__main__':
    app.run(debug=True)
