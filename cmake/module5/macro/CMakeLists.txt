cmake_minimum_required(VERSION 3.0.0)

#only difference between macro and function is that macro do not introduce new scope
#argument of macro are not variables and only there for string replacement
    
#function(print_var name_var)
macro(print_var name_var)
    if(DEFINED name_var)
        message("var_name is defined")
    endif()

    message("name :${name_var}")
    set(name_var "Chari")
    message("name :${name_var}")
endmacro()
#endfunction()

#check difference by replacing macro with function

print_var("Nihal")

