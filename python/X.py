'''
# @Author      : Darwin Neira Carrasco 
# @Email       : dneirac@unsa.edu.pe
# @File        : X
#
# @Description : 
'''

from A import *
from B import *
from C import *
class X:
    def foo(self,b): #B
        print(type(b))
        a = A()
        print("parametro: B, retorno: B")
        return a #A


