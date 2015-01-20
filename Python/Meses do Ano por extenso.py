mes = ["janeiro","fevereiro","marco","abril","maio","junho","julho","agosto"
       ,"setembro","outubro","novembro","dezembro"]



data = int (input ())
if 1<=data<=12:
    print (mes[data-1])
else:
    print("invalido")
