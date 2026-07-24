class Ema:
	def __init__(self,alpha):
		self.alpha = alpha
		self.value = None
	def update(self,new_measurement):
		if self.value is None:
			self.value = new_measurement
		else:
			self.value = (self.alpha * new_measurement) + ((1-self.alpha)*self.value)
		return self.value
