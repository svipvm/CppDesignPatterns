cmake_minimum_required(VERSION 3.16)
project(Cpp_DesignPatterns)

set(CMAKE_CXX_STANDARD 11)

add_executable(Cpp_DesignPatterns main.cpp
        SimpleFactory/Car.cpp SimpleFactory/Car.h
        SimpleFactory/BentleyCar.cpp SimpleFactory/BentleyCar.h
        SimpleFactory/FerrariCar.cpp SimpleFactory/FerrariCar.h
        SimpleFactory/PorscheCar.cpp SimpleFactory/PorscheCar.h
        SimpleFactory/CarFactory.cpp SimpleFactory/CarFactory.h
        Strategy/OperateStrategy.cpp Strategy/OperateStrategy.h
        Strategy/AddStrategy.cpp Strategy/AddStrategy.h
        Strategy/SubStrategy.cpp Strategy/SubStrategy.h
        Strategy/MulStrategy.cpp Strategy/MulStrategy.h
        Strategy/DivStrategy.cpp Strategy/DivStrategy.h
        Strategy/OperateContext.cpp Strategy/OperateContext.h
        Decorator/Hero.cpp Decorator/Hero.h
        Decorator/SuperMan.cpp Decorator/SuperMan.h
        Decorator/SkillDecorator.cpp Decorator/SkillDecorator.h
        Decorator/FlyDecorator.cpp Decorator/FlyDecorator.h
        Decorator/LaserDecorator.cpp Decorator/LaserDecorator.h
        Decorator/DiveDecorator.cpp Decorator/DiveDecorator.h
        Decorator/LandDecorator.cpp Decorator/LandDecorator.h
        Decorator/Captain.cpp Decorator/Captain.h
        Proxy/DownloadInterface.cpp Proxy/DownloadInterface.h
        Proxy/DownloadReal.cpp Proxy/DownloadReal.h
        Proxy/DownloadProxy.cpp Proxy/DownloadProxy.h
        FactoryMethod/Animal.cpp FactoryMethod/Animal.h
        FactoryMethod/Dog.cpp FactoryMethod/Dog.h
        FactoryMethod/Cut.cpp FactoryMethod/Cut.h
        FactoryMethod/AnimalFactory.cpp FactoryMethod/AnimalFactory.h
        FactoryMethod/DogFactory.cpp FactoryMethod/DogFactory.h
        FactoryMethod/CutFactory.cpp FactoryMethod/CutFactory.h
        Prototype/Resume.cpp Prototype/Resume.h
        Prototype/Record.cpp Prototype/Record.h
        TemplateMethod/Problem.cpp TemplateMethod/Problem.h
        TemplateMethod/RichPerson.cpp TemplateMethod/RichPerson.h
        TemplateMethod/PoorPerson.cpp TemplateMethod/PoorPerson.h
        Builder/PersonBuilder.cpp Builder/PersonBuilder.h
        Builder/ThinPersonBuilder.cpp Builder/ThinPersonBuilder.h
        Builder/FatPersonBuilder.cpp Builder/FatPersonBuilder.h
        Builder/PersonDirector.cpp Builder/PersonDirector.h
        Observer/Subject.cpp Observer/Subject.h
        Observer/Observer.cpp Observer/Observer.h
        Observer/Employee.cpp Observer/Employee.h
        Observer/Reception.cpp Observer/Reception.h AbstractFactory/UserInterface.cpp AbstractFactory/UserInterface.h AbstractFactory/AccessUser.cpp AbstractFactory/AccessUser.h AbstractFactory/RedisUser.cpp AbstractFactory/RedisUser.h AbstractFactory/DataFactory.cpp AbstractFactory/DataFactory.h AbstractFactory/RoomInterface.cpp AbstractFactory/RoomInterface.h AbstractFactory/AccessRoom.cpp AbstractFactory/AccessRoom.h AbstractFactory/RedisRoom.cpp AbstractFactory/RedisRoom.h)
