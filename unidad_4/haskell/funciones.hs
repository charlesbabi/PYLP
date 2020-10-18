module Funciones where
sucesor :: Integer -> Integer
sucesor(x) = x + 1

pre :: Integer -> Integer
pre(x) = x - 1 

doble :: Integer -> Integer
doble x=x+x

cuadruple :: Integer -> Integer
cuadruple(x) = doble(doble(x))

isPar :: Integer -> Bool
isPar x = x `mod` 2 == 0 

menor (x,y) = if x <= y then x else y

{- funciones de lista -}

customMap (f,[]) = []
customMap (f,x:xs) = f(x) : customMap(f, xs)

customFilter (f, []) = []
customFilter (f, x:xs) =  if f(x)==True then
                      x:customFilter(f, xs)
                    else  
                      customFilter(f, xs)

exists(el, []) = False
exists(el, x:xs) = if el == x then 
                    True
                    else
                      exists(el, xs)

indexOf(el, []) = -1
indexOf(el, x:xs) = indexOfAux(el, x:xs, 0)

indexOfAux(el, [], currIdx) = -1
indexOfAux(el, x:xs, currIdx) = if(el == x) then
                              currIdx
                              else
                                indexOfAux(el, xs, currIdx+1)