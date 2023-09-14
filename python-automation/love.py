from twilio.rest import Client

account_sid = 'AC5ac77c07699c57fd52b1ab5282b3c61d'
auth_token = 'e4a0ef2903be4f0413c2d7e2e8173db1'
client = Client(account_sid, auth_token)
def sendLove():
	message = client.messages.create(
	  from_='whatsapp:+14155238886'
	  body='This is your love\n This is your one and only sweet bobo',
	  to='whatsapp:+233557386125'
	)

	print(message.sid)
	




