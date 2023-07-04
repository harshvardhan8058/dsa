import time

class CountdownTimer:
    def __init__(self, duration):
        self.duration = duration
        self.start_time = None
        self.paused_time = None
        self.time_left = duration

    def start(self):
        if self.start_time is None:
            self.start_time = time.time()

    def reset(self):
        self.start_time = None
        self.paused_time = None
        self.time_left = self.duration

    def stop(self):
        self.start_time = None
        self.paused_time = None
        self.time_left = 0

    def pause(self):
        if self.start_time is not None and self.paused_time is None:
            self.paused_time = time.time()

    def resume(self):
        if self.start_time is not None and self.paused_time is not None:
            pause_duration = time.time() - self.paused_time
            self.start_time += pause_duration
            self.paused_time = None

    def is_running(self):
        return self.start_time is not None and self.time_left > 0

    def time_remaining(self):
        if self.start_time is None:
            return self.duration
        elif self.paused_time is not None:
            return self.time_left
        else:
            elapsed_time = time.time() - self.start_time
            time_left = self.duration - elapsed_time
            return max(0, time_left)

    def run(self):
        while self.is_running():
            time_left = self.time_remaining()
            print("Time left: {:.2f} seconds".format(time_left))
            time.sleep(0.1)
            self.time_left = time_left

        print("Time's up!")

timer = CountdownTimer(60)

timer.start()

while True:
    cmd = input("Enter command (start, reset, stop, pause, resume): ")

    if cmd == "start":
        timer.start()
    elif cmd == "reset":
        timer.reset()
    elif cmd == "stop":
        timer.stop()
    elif cmd == "pause":
        timer.pause()
    elif cmd == "resume":
        timer.resume()

    if timer.is_running():
        
        print("Time left: {:.2f} seconds".format(timer.time_remaining()))
    else:
        print("Final time left: {:.2f} seconds".format(timer.time_remaining()))
        break;
