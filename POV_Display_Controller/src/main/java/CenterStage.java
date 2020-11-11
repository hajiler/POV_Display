import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class CenterStage extends Application {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        stage.setTitle("POV Display");
        BorderPane root = new BorderPane();
        root.setCenter(getCenter());

        Scene scene = new Scene(root, 800, 600);
        stage.setScene(scene);
        stage.show();
    }

    public VBox getCenter() {
        Label message = new Label("Enter POV Display Message");
        TextField messageInput = new TextField("Blah blah");
        return new VBox(message, messageInput);
    }
}
