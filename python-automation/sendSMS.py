from twilio.rest import Client

account_sid = 'AC5ac77c07699c57fd52b1ab5282b3c61d'
auth_token = '[63ef08c50b0a4c40c813ab1fd4baf55d]'
client = Client(account_sid, auth_token)

def sendSMS():
	message = client.messages.create(
	  from_='+15176843656',
	  body='My love is sweet for you',
	  to='+233557386125'
	)

	print(message.sid)
