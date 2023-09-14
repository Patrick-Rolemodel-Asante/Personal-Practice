from apscheduler.schedulers.blocking import BlockingScheduler
from sendSMS import sendSMS



sched = BlockingScheduler()

# Schedule job_function to be called every two hours
sched.add_job(sendSMS, 'interval', seconds=2)

sched.start()
