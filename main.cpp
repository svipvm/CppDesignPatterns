#include <iostream>
#include <memory>
// SimpleFactory
#include "SimpleFactory/Car.h"
#include "SimpleFactory/CarFactory.h"
// Strategy
#include "Strategy/OperateContext.h"
// Decorator
#include "Decorator/SuperMan.h"
#include "Decorator/Captain.h"
#include "Decorator/FlyDecorator.h"
#include "Decorator/LaserDecorator.h"
#include "Decorator/DiveDecorator.h"
#include "Decorator/LandDecorator.h"
// Proxy
#include "Proxy/DownloadProxy.h"
// FactoryMethod
#include "FactoryMethod/AnimalFactory.h"
#include "FactoryMethod/DogFactory.h"
#include "FactoryMethod/CutFactory.h"
// Prototype
#include "Prototype/Resume.h"
// TemplateMethod
#include "TemplateMethod/Problem.h"
#include "TemplateMethod/RichPerson.h"
#include "TemplateMethod/PoorPerson.h"
// Builder
#include "Builder/ThinPersonBuilder.h"
#include "Builder/FatPersonBuilder.h"
#include "Builder/PersonDirector.h"
// Observer
#include "Observer/Reception.h"
#include "Observer/Employee.h"


void testSimpleFactory();
void testStrategy();
void testDecorator();
void testProxy();
void testFactoryMethod();
void testPrototype();
void testTemplateMethod();
void testBuilder();
void testObserver();

int main() {
    testSimpleFactory();
    testStrategy();
    testDecorator();
    testProxy();
    testFactoryMethod();
    testPrototype();
    testTemplateMethod();
    testBuilder();
    testObserver();
    return 0;
}

void testSimpleFactory() {
    std::cout << "========== SimpleFactory ==========" << std::endl;
    auto bentley = CarFactory::createCar(BENTLEY);
    bentley->show();
    auto ferrari = CarFactory::createCar(FERRARI);
    ferrari->show();
    auto porsche = CarFactory::createCar(PORSCHE);
    porsche->show();
}

void testStrategy() {
    std::cout << "============= Strategy =============" << std::endl;
    float numberA = 8, numberB = 2;
    OperateContext addOperate(ADD, numberA, numberB);
    std::cout << numberA << " + " << numberB << " = "
              << addOperate.result() << std::endl;
    OperateContext subOperate(SUB, numberA, numberB);
    std::cout << numberA << " - " << numberB << " = "
              << subOperate.result() << std::endl;
    OperateContext mulOperate(MUL, numberA, numberB);
    std::cout << numberA << " * " << numberB << " = "
              << mulOperate.result() << std::endl;
    OperateContext divOperate(DIV, numberA, numberB);
    std::cout << numberA << " / " << numberB << " = "
              << divOperate.result() << std::endl;
}

void testDecorator() {
    std::cout << "============ Decorator ============" << std::endl;
    auto superman = std::make_shared<SuperMan>();
    auto captain = std::make_shared<Captain>();
    auto flyDecorator = std::make_shared<FlyDecorator>();
    auto laserDecorator = std::make_shared<LaserDecorator>();
    auto diveDecorator = std::make_shared<DiveDecorator>();
    auto landDecorator = std::make_shared<LandDecorator>();

    flyDecorator->setSkill(superman);
    laserDecorator->setSkill(flyDecorator);
    landDecorator->setSkill(laserDecorator);
    landDecorator->skill();

    flyDecorator->setSkill(captain);
    diveDecorator->setSkill(flyDecorator);
    landDecorator->setSkill(diveDecorator);
    landDecorator->skill();
}

void testProxy() {
    std::cout << "============== Proxy ==============" << std::endl;
    auto downloadProxy = std::make_shared<DownloadProxy>("bilibili.png");
    downloadProxy->show();
}

void testFactoryMethod() {
    std::cout << "========== FactoryMethod ==========" << std::endl;
    auto dogFactory = std::make_shared<DogFactory>();
    auto dog = dogFactory->createAnimal("dog");
    dog->show();
    auto cutFactory = std::make_shared<CutFactory>();
    auto cut = cutFactory->createAnimal("cut");
    cut->show();
}

void testPrototype() {
    std::cout << "============ Prototype ============" << std::endl;
    std::shared_ptr<Resume> resume1 = std::make_shared<Resume>();
    resume1->setInfo("vmice", 21);
    resume1->setRecord("WSAD", 3);
    std::shared_ptr<Resume> resume2 = resume1->clone();
    resume1->show();
    resume2->show();
    resume1->setInfo("svipvm", 20);
    resume2->setRecord("QWER", 4);
    resume1->show();
    resume2->show();
}

void testTemplateMethod() {
    std::cout << "========= TemplateMethod =========" << std::endl;
    auto rich = std::make_shared<RichPerson>("vmice");
    auto poor = std::make_shared<PoorPerson>("svipvm");
    rich->show();
    poor->show();
}

void testBuilder() {
    std::cout << "============= Builder =============" << std::endl;
    auto thinPersonBuilder = std::make_shared<ThinPersonBuilder>("vmice");
    auto fatPersonBuilder = std::make_shared<FatPersonBuilder>("svipvm");
    auto personDirector = std::make_shared<PersonDirector>();
    personDirector->Construct(thinPersonBuilder);
    personDirector->Construct(fatPersonBuilder);
}

void testObserver() {
    std::cout << "============ Observer ============" << std::endl;
    auto reception = std::make_shared<Reception>();
    auto vmice = std::make_shared<Employee>("vmice", reception);
    auto svipvm = std::make_shared<Employee>("svipvm", reception);
    reception->setState("first come in there ...");
    reception->attach(vmice);
    reception->attach(svipvm);
    reception->notify();
    reception->setState("second come in there ...");
    reception->detach(svipvm);
    reception->notify();
}