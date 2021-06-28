import pendrive.Pendrive;
import pendrive.Price;
import pendrive.ProductSpecification;
import pendrive.ProductStatus;

public class Main {

    public static void main(String[] args) {
        Pendrive pendrive = new Pendrive("Adata UV128 USB 3.2 128GB Pendrive", "Adata UV128 USB 3.2 Pendrive " +
                "featured with 128GB capacity, USB 3.2 High-Speed Interface and a sliding USB connector, which " +
                "smoothly extends from the drive at the push of a thumb. In this Pen Drive, the capless mechanical " +
                "design eliminates the hassle of lost drive caps", new Price(800, 750));

        pendrive.setBarand(("ADATA"));
        pendrive.setProductCode(("123asd"));
        pendrive.setSKU(("PP123"));
        pendrive.setStatus(ProductStatus.IN_STOCK);

        // Add Features
        pendrive.addFeature("Feature 1");
        pendrive.addFeature("Feature 2");
        pendrive.addFeature("Feature 3");

        // Add Specification
        pendrive.addSpecification(new ProductSpecification("Capacity","128GB","Key Features"));
        pendrive.addSpecification(new ProductSpecification("Read Speed","Up to 100 MB/s read","Key Features"));
        pendrive.addSpecification(new ProductSpecification("Connectivity","USB 3.2","Physical Attribute"));
        pendrive.addSpecification(new ProductSpecification("Dimensions","60 x 20 x 9mm","Physical Attribute"));

        pendrive.drawProduct();
//      System.out.println(pendrive);

    }

}
