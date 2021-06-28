package pendrive;

import java.util.Arrays;
import java.util.UUID;

public class Pendrive {
    private final String id;
    private String title;
    private String summary;
    private String description;
    private String barand;
    private String productCode;
    private String SKU;
    private Price price;
    private ProductStatus status;
    private String[] features;
    private ProductSpecification[] specifications;
    private FAQ[] questions;
    private Image[] gallery;

    private int featuresCount;
    private int specificationCount;

    public Pendrive(String title, String summary, Price price) {
        this.id = UUID.randomUUID().toString();
        this.title = title;
        this.summary = summary;
        this.price = price;
        this.status = ProductStatus.UPCOMING;
        this.features = new String[10];
        this.specifications = new ProductSpecification[20];
        this.questions = new FAQ[10];
        this.gallery = new Image[5];
        featuresCount = 0;
        specificationCount = 0;
    }

    public Pendrive(String title, String summary, String barand, String productCode, String SKU, Price price) {
        this.id = UUID.randomUUID().toString();
        this.title = title;
        this.summary = summary;
        this.barand = barand;
        this.productCode = productCode;
        this.SKU = SKU;
        this.price = price;
        this.status = ProductStatus.UPCOMING;
        this.features = new String[10];
        this.specifications = new ProductSpecification[20];
        this.questions = new FAQ[10];
        this.gallery = new Image[5];
        featuresCount = 0;
        specificationCount = 0;
    }

    public String getId() {
        return id;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getSummary() {
        return summary;
    }

    public void setSummary(String summary) {
        this.summary = summary;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getBarand() {
        return barand;
    }

    public void setBarand(String barand) {
        this.barand = barand;
    }

    public String getProductCode() {
        return productCode;
    }

    public void setProductCode(String productCode) {
        this.productCode = productCode;
    }

    public String getSKU() {
        return SKU;
    }

    public void setSKU(String SKU) {
        this.SKU = SKU;
    }

    public Price getPrice() {
        return price;
    }

    public void setPrice(Price price) {
        this.price = price;
    }

    public ProductStatus getStatus() {
        return status;
    }

    public void setStatus(ProductStatus status) {
        this.status = status;
    }

    public String[] getFeatures() {
        return features;
    }

    public void setFeatures(String[] features) {
        this.features = features;
    }

    public ProductSpecification[] getSpecifications() {
        return specifications;
    }

    public void setSpecifications(ProductSpecification[] specifications) {
        this.specifications = specifications;
    }

    public FAQ[] getQuestions() {
        return questions;
    }

    public void setQuestions(FAQ[] questions) {
        this.questions = questions;
    }

    public Image[] getGallery() {
        return gallery;
    }

    public void setGallery(Image[] gallery) {
        this.gallery = gallery;
    }

    public void addFeature(String feature) {
        features[featuresCount++] = feature;
    }

    public void addSpecification(ProductSpecification specification) {
        specifications[specificationCount++] = specification;
    }

    public void addQuestion(FAQ question) {
        if (questions.length < 10) {
            questions[questions.length] = question;
        }
    }

    public void AddImage(Image image) {
        if (gallery.length < 5) {
            gallery[gallery.length] = image;
        }
    }

    public void drawProduct() {
        System.out.println(title);
        System.out.println("---------------------------");
        System.out.println("Brand: " + barand + " | " + "Product Code: " + productCode + " | SKU: " + SKU);
        System.out.println("");
        System.out.println(summary);

        System.out.println("---------------------------");
        System.out.println("Features:");
        for (int i = 0; i < featuresCount; i++) {
            System.out.println((i + 1) + ".\t" + features[i]);
        }

        System.out.println("---------------------------");
        System.out.println("Specification:");
        for (int i = 0; i < specificationCount; i++) {
                System.out.println((i + 1) + ".\t" + specifications[i].getKey() + " " +specifications[i].getValue());
        }
    }

    @Override
    public String toString() {
        return "Pendrive{" +
                "id='" + id + '\'' +
                ", title='" + title + '\'' +
                ", summary='" + summary + '\'' +
                ", description='" + description + '\'' +
                ", barand='" + barand + '\'' +
                ", productCode='" + productCode + '\'' +
                ", SKU='" + SKU + '\'' +
                ", price=" + price +
                ", status=" + status +
                ", features=" + Arrays.toString(features) +
                ", specifications=" + Arrays.toString(specifications) +
                ", questions=" + Arrays.toString(questions) +
                ", gallery=" + Arrays.toString(gallery) +
                '}';
    }
}
