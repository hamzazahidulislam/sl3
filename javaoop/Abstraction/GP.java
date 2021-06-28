package Abstraction;

public class GP extends BSPLimited {

    @Override
    void establishedConnectionwithTower() {
        System.out.println("GP network is connected");
    }

    @Override
    void DeshtroyConnectionwithTower() {
        System.out.println("GP network is Destroy");
    }
}
