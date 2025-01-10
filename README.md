# DS-Activity


# TV Show Scheduler: Finding the Next Three Upcoming Shows on a Specific Channel Based on Current Time

This project is a simple C program that allows users to find the next three upcoming TV shows on a specified channel based on the current time. It uses a predefined TV schedule as input and filters the results to display the relevant shows for the user.


## Features

- Fetches the current time and filters the TV schedule to display upcoming shows.
- Allows users to specify a channel to narrow down the schedule.
- Displays the next three shows on the selected channel along with their airtimes.


## Project Structure

The repository contains the following files:

- **project.c**: The C source code that implements the TV show scheduler.
- **DS Report.pdf**: A detailed report that documents the project, including its features, implementation details, and design considerations.


## Input Data

The program uses the following TV schedule, which includes the show name, channel, and airtime:

| Show Name             | Channel    | Air Time |
|-----------------------|------------|----------|
| Morning News          | Channel 1  | 06:00    |
| Tech Talk             | Channel 2  | 06:30    |
| Cartoon Hour          | Channel 3  | 07:00    |
| Morning Show          | Channel 1  | 07:30    |
| Fitness Time          | Channel 4  | 08:00    |
| Cooking Delights      | Channel 2  | 08:30    |
| Morning Weather       | Channel 3  | 09:00    |
| Music Hits            | Channel 1  | 09:30    |
| Movie Marathon        | Channel 4  | 10:00    |
| Science Hour          | Channel 2  | 10:30    |
| Adventure Travel      | Channel 3  | 11:00    |
| Sports Update         | Channel 1  | 11:30    |
| News Roundup          | Channel 4  | 12:00    |
| Midday Talk           | Channel 2  | 12:30    |
| Comedy Hour           | Channel 3  | 13:00    |
| Health Today          | Channel 1  | 13:30    |
| Tech Innovations      | Channel 4  | 14:00    |
| Drama Series          | Channel 2  | 14:30    |
| Prime Time Movie      | Channel 3  | 15:00    |
| Celebrity Gossip      | Channel 1  | 15:30    |
| Music Video Show      | Channel 4  | 16:00    |
| Talk Show             | Channel 2  | 16:30    |
| Fashion Focus         | Channel 3  | 17:00    |
| Evening News          | Channel 1  | 17:30    |
| Game Show             | Channel 4  | 18:00    |
| Late Night Show       | Channel 2  | 18:30    |
| Stand-up Comedy       | Channel 3  | 19:00    |
| Movie Night           | Channel 1  | 19:30    |
| Sports Highlights     | Channel 4  | 20:00    |
| Mystery Series        | Channel 2  | 20:30    |
| Music Hour            | Channel 3  | 21:00    |
| Documentary Time      | Channel 1  | 21:30    |
| Night News            | Channel 4  | 22:00    |
| Late Night Movie      | Channel 2  | 22:30    |
| All-Star Quiz         | Channel 3  | 23:00    |

The program uses this data to determine and display the next three shows on a specific channel.


## Requirements

- **Compiler**: A C compiler like GCC is required to compile the source code.
- **Platform**: Compatible with Linux, macOS, or any UNIX-based environment.


## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/vishxgowda/DS-Activity.git
   cd DS-Activity
   ```

2. Compile the program:
   ```bash
   gcc project.c -o tv_scheduler
   ```

3. Execute the program:
   ```bash
   ./tv_scheduler
   ```

4. Follow the on-screen instructions to:
   - Specify the desired channel.
   - View the next three upcoming shows along with their airtimes.



## Example Output

If the current time is `10:15` and the user selects **Channel 2**, the output will display:

```
Next three shows on Channel 2:
1. Science Hour at 10:30
2. Midday Talk at 12:30
3. Drama Series at 14:30
```

---

## Documentation

For a detailed explanation of the project, its design, and features, refer to **`CS Report.pdf`**.

---

## Contribution

Contributions are welcome! Feel free to fork the repository, make changes, and submit a pull request. Suggestions and bug reports are appreciated as well.

---

## License

This project is licensed under the MIT License. For more details, refer to the `LICENSE` file.

