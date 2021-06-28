package Abstraction;

public class Robi extends BSPLimited {


    @Override
    void establishedConnectionwithTower() {
        System.out.println("Robi network is connected");
    }

    @Override
    void DeshtroyConnectionwithTower() {
        System.out.println("Robi network is destroy");

    }
}
