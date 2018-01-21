# Resutls

P component of the PID algorithm makes the car move towards the center line when it's off center. But it also cause overshoot.
D component of the PID algorithm reduces the overshoot cause by P componnet.
I component of the PID algorithm helps overcome drifting. Since drifting is not observed in the simulator, I component coefficient is set to 0.

Hyper-parameters are choose using a manual iterative tuning process.