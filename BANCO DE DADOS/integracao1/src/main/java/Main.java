import DAO.UserDAO;
import Model.User;

public class Main {
    public static void main(String[] args) {
        UserDAO userDAO = new UserDAO();

        User user = new User("Pedro", "1236459");
        User user1 = new User("Joao", "1236459");

        //userDAO.insertUser(user);
        //userDAO.insertUser(user1);


        //userDAO.deleteUser(3);
        //userDAO.deleteUser(4);

        userDAO.updateUser(1, user1);
        userDAO.selectUser();

    }
}