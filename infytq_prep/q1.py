class ClassA:
         def _init_(self, val1) :
               self.value = val1
         def method_a(self) :
               return 10+self.value
class ClassB:
         def _init_(self, val2):
               self. num=val2
         def method_b(self, obj):
               return obj.method_a()+self.num

obj1=ClassA(20)
obj2=ClassB(30)
print(obj2.method_b(obj1))