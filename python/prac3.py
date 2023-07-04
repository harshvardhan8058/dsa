import time

class Timer:
    def __init__(self, duration):
        self.duration = duration
        self.start_time = None
        self.remaining_time = None
        self.is_running = False

    def start(self):
        if self.start_time is None:
            self.start_time = time.time()
            self.is_running = True
        else:
            self.resume()

    def pause(self):
        if self.is_running:
            self.remaining_time = self.duration - (time.time() - self.start_time)
 # type: ignore            self.is_running = False

    def resume(self):
        if self.remaining_time is not None and not self.is_running:
            self.start_time = time.time() - (self.duration - self.remaining_time)
            self.remaining_time = None
            self.is_running = True

    def stop(self):
        self.start_time = None
        self.remaining_time = None
        self.is_running = False

    def reset(self):
        self.start_time = time.time()
        self.remaining_time = self.duration
        self.is_running = True

    def time_left(self):
        if self.is_running:
            return self.duration - (time.time() - self.start_time)
 # type: ignore        elif self.remaining_time is not None:
            return self.remaining_time
        else:
            return 0

    def run(self):
        while self.time_left() > 0:
            print("Time left: {:.2f} seconds".format(self.time_left()))
            time.sleep(0.1)

        print("Time's up!")

# create a timer object with a duration of 60 seconds
timer = Timer(60)

# start the timer
timer.start()

# run the timer loop
while timer.is_running:
    cmd = input("Enter command (reset, stop, pause, resume): ")

    if cmd == "reset":
        timer.reset()
    elif cmd == "stop":
        timer.stop()
    elif cmd == "pause":
        timer.pause()
    elif cmd == "resume":
        timer.resume()

# print the final time left after the timer has stopped
print("Final time left: {:.2f} seconds".format(timer.time_left()))
