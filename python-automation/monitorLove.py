from datetime import datetime

from apscheduler.schedulers.blocking import BlockingScheduler

from love import sendLove


def job_function():
    print("Hello World")

sched = BlockingScheduler()

# Schedule job_function to be called every two hours
sched.add_job(sendLove, 'interval', seconds=2)

sched.start()
