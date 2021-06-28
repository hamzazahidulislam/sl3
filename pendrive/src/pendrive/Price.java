package pendrive;

public class Price {
    private double regulaPrice;
    private double salesPrice;

    public Price(double regulaPrice, double salesPrice) {
        this.regulaPrice = regulaPrice;
        this.salesPrice = salesPrice;
    }

    public double getRegulaPrice() {
        return regulaPrice;
    }

    public void setRegulaPrice(double regulaPrice) {
        this.regulaPrice = regulaPrice;
    }

    public double getSalesPrice() {
        return salesPrice;
    }

    public void setSalesPrice(double salesPrice) {
        this.salesPrice = salesPrice;
    }

    @Override
    public String toString() {
        return "Price{" +
                "regulaPrice=" + regulaPrice +
                ", salesPrice=" + salesPrice +
                '}';
    }
}
