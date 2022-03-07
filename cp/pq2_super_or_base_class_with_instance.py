class Vehicle():
    def __init__(self, color):
        self.color = color

class FourWheeler(Vehicle):
    def __init__(self, no_of_gears, color):
        super().__init__(color)
        self.no_of_gears = no_of_gears

class TwoWheeler(Vehicle):
    def __init__(self, engine_cc):
        super().__init__("Red")
        self.engine_cc = engine_cc
        self.color = 'Blue'

maruti = FourWheeler(4, 'Red')
print(maruti.color, maruti.no_of_gears)
activa = TwoWheeler(80)
print(activa.color, activa.engine_cc)