cmake_minimum_required(VERSION 3.0.0)

set(VAR a)
#set(VAR ${VAR}a)
#set(VAR ${VAR}a)
#set(VAR ${VAR}a)
#set(VAR ${VAR}a)

#or

while(NOT VAR STREQUAL aaaaaaaa)
    set(VAR ${VAR}a)
    message(${VAR})
endwhile()


foreach(NAME nihal chari;BOSCH)
    message(${NAME})
endforeach()


foreach(x RANGE 5)
    message(${x})
endforeach()

foreach(x RANGE 10 13)
    message(${x})
endforeach()

foreach(x RANGE 15 34 5)
    message(${x})
endforeach()


set(VAR3 1;3)
set(VAR4 4 6)
set(VAR5 "7 ;9")


foreach(x IN LISTS VAR3 VAR4 VAR5)
    message(${x})
endforeach()



    

