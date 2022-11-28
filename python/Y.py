'''
# @Author      : Darwin Neira Carrasco 
# @Email       : dneirac@unsa.edu.pe
# @File        : Y
#
# @Description : 
'''

from X import *

class Y(X):
    def foo(self,a):#A
        print(type(a))
        b = B()
        print("parametro: A, retorno: B")
        return b #B
