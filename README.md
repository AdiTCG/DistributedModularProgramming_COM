///Author Adi Soumitra Mondal
///First version towards COM programming

# DistributedModularProgramming_COM
An approach to create distributed, modular, platform-independent programming for inter-process communication and dynamic object creation

Now make some changes in "STATICMATHSRC" and try to run the client exe without building it, changes will not reflect.
**This the biggest problem with static linking and it does not work in real world.

***************************
///Commit version::"035cda0"
In this version we deleted both the folder for static linked library and client.
Now we are using dynamic linked library (dll).
**Any changes in library will reflect in client without building the program.