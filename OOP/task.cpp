#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Task {
private:
    int id;
    string name;
    int priority;

public:

    Task(int i, string n, int p) {
        id = i;
        name = n;
        priority = p;
    }
    // getters 


    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    int getPriority() {
        return priority;
    }

    void displayTask() {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Priority: " << priority << endl;
    }
};

class TaskManager {
private:
    // You can use a vector to store tasks, which allows dynamic resizing and easy access.
    vector<Task> tasks;
    vector<Task>trashCan;
    // You can maintain a stack of deleted tasks and pop from it to restore.

public:


    void addTask() {
        int id, priority;
        string name;

        cout << "\nEnter Task ID: ";
        cin >> id;

        cin.ignore();
        // to clear the newline character from the input buffer after reading an integer for example \n

        cout << "Enter Task Name: ";
        getline(cin, name);

        cout << "Enter Task Priority: ";
        cin >> priority;

        Task newTask(id, name, priority);

        tasks.push_back(newTask);

        cout << "Task added successfully!\n";
    }


    void deleteTask() {
        int id;

        cout << "\nEnter Task ID to delete: ";
        cin >> id;

        for (int i = 0; i < tasks.size(); i++) {

            if (tasks[i].getId() == id) {
                trashCan.push_back(tasks[i]);
                tasks.erase(tasks.begin() + i);

                cout << "Task deleted successfully!\n";
                return;
            }
        }

        cout << "Task not found!\n";
    }

    
    void showTasks() {

        if (tasks.empty()) {
            cout << "\nNo tasks available.\n";
            return;
        }

        cout << "\n===== TASK LIST =====\n";

        for (Task t : tasks) {
            t.displayTask();
        }
    }

    
    void linearSearch() {

        int id;

        cout << "\nEnter Task ID to search: ";
        cin >> id;

        for (Task t : tasks) {

            if (t.getId() == id) {

                cout << "\nTask Found:\n";
                t.displayTask();
                return;
            }
        }

        cout << "Task not found!\n";
    }
    void undoDelete() {
        // This function can be implemented to restore the last deleted task.
        
        if (!trashCan.empty()) {
            //  if the trash can is not empty, we can restore the last deleted task by popping it from the trash can and adding it back to the tasks vector.
            tasks.push_back(trashCan.back());
            trashCan.pop_back();
            cout << "Task restored successfully!\n";
        } else {
            cout << "No tasks to restore!\n";
        }

    }


    void binarySearchTask() {

        
        sort(tasks.begin(), tasks.end(),
        // To perform binary search, we need to sort the tasks based on their IDs first. We can use the sort function from the algorithm library and provide a custom comparator to sort by ID.
             [](Task a, Task b) {
        // 
                 return a.getId() < b.getId();
             });

        int id;

        cout << "\nEnter Task ID to search: ";
        cin >> id;

        int left = 0;
        // We can then implement the binary search algorithm by maintaining two pointers (left and right) that represent the current search range.
        int right = tasks.size() - 1;
        // 

        while (left <= right) {

            int mid = (left + right) / 2;

            if (tasks[mid].getId() == id) {

                cout << "\nTask Found:\n";
                tasks[mid].displayTask();
                return;
            }

            else if (tasks[mid].getId() < id) {
                left = mid + 1;
                // If the middle task's ID is less than the target ID, we can narrow our search to the right half of the vector by moving the left pointer to mid + 1.
            }

            else {
                right = mid - 1;
                
            }
        }

        cout << "Task not found!\n";
    }
};

int main() {

    TaskManager manager;

    int choice;

    do {

        cout << "\n====== TO-DO APPLICATION ======\n";

        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Show Tasks\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search\n";
        cout << "6. Exit\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.addTask();
            break;

        case 2:
            manager.deleteTask();
            break;

        case 3:
            manager.showTasks();
            break;

        case 4:
            manager.linearSearch();
            break;

        case 5:
            manager.binarySearchTask();
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}