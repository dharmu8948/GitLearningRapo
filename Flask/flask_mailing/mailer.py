from flask import *
from flask_mail import *

app = Flask(__name__)

# flask maill configuration

app.config.update(
    MAIL_SERVER='smtp.gmail.com',
    MAIL_PORT = 465,
    MAIL_USE_SSL = True,
    MAIL_USERNAME = 'dk*****@gmail.com',
    MAIL_PASSWORD = '********'
)
@app.route('/')
def home():
    return '<a href="http://127.0.0.1:5000/send-mail/">Click Me</a>'

# instantiate the mail class

mail = Mail(app)


# configure the Message class object and send the mail from a URL

@app.route('/send-mail/')
def send_mail():
    msg = mail.send_message(
        'Send Mail tutorial!',
        sender='dk****@gmail.com',
        recipients=['ji******@gmail.com'],
        body="Congratulations you've succeeded!"
    )
    return 'Mail sent'


if __name__ == '__main__':
    app.run(debug=True)
