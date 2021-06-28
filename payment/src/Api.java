public class Api implements SSLCOMMERZ{
    @Override
    public void rocketPayment(double amount) {
        System.out.println("Payment Successfully done by Rocket "+ amount);
    }

    @Override
    public void bkashPayment(double amount) {
        System.out.println("Payment Successfully done by Bkash "+ amount);
    }

    @Override
    public void NexusPayment(double amount) {
        System.out.println("Payment Successfully done by Nexus "+ amount);
    }
}
