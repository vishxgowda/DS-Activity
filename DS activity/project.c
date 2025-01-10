#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char showName[50];
    char channel[20];
    int hour;
    int minute;
} Show;

int compareShows(const void *a, const void *b) {
    Show *showA = (Show *)a;
    Show *showB = (Show *)b;

    if (showA->hour == showB->hour) {
        return showA->minute - showB->minute;
    }
    return showA->hour - showB->hour;
}

void findNextShows(Show shows[], int n, char *channel, int currentHour, int currentMinute) {
    Show upcoming[100];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(shows[i].channel, channel) == 0 &&
            (shows[i].hour > currentHour || (shows[i].hour == currentHour && shows[i].minute > currentMinute))) {
            upcoming[count++] = shows[i];
        }
    }

    qsort(upcoming, count, sizeof(Show), compareShows);

    printf("Next three shows on %s:\n", channel);
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%s at %02d:%02d\n", upcoming[i].showName, upcoming[i].hour, upcoming[i].minute);
    }
    if (count == 0) {
        printf("No upcoming shows found on %s.\n", channel);
    }
}

int main() {
    Show shows[] = {
        {"Morning News", "Channel 1", 6, 0},
        {"Tech Talk", "Channel 2", 6, 30},
        {"Cartoon Hour", "Channel 3", 7, 0},
        {"Morning Show", "Channel 1", 7, 30},
        {"Fitness Time", "Channel 4", 8, 0},
        {"Cooking Delights", "Channel 2", 8, 30},
        {"Morning Weather", "Channel 3", 9, 0},
        {"Music Hits", "Channel 1", 9, 30},
        {"Movie Marathon", "Channel 4", 10, 0},
        {"Science Hour", "Channel 2", 10, 30},
        {"Adventure Travel", "Channel 3", 11, 0},
        {"Sports Update", "Channel 1", 11, 30},
        {"News Roundup", "Channel 4", 12, 0},
        {"Midday Talk", "Channel 2", 12, 30},
        {"Comedy Hour", "Channel 3", 13, 0},
        {"Health Today", "Channel 1", 13, 30},
        {"Tech Innovations", "Channel 4", 14, 0},
        {"Drama Series", "Channel 2", 14, 30},
        {"Prime Time Movie", "Channel 3", 15, 0},
        {"Celebrity Gossip", "Channel 1", 15, 30},
        {"Music Video Show", "Channel 4", 16, 0},
        {"Talk Show", "Channel 2", 16, 30},
        {"Fashion Focus", "Channel 3", 17, 0},
        {"Evening News", "Channel 1", 17, 30},
        {"Game Show", "Channel 4", 18, 0},
        {"Late Night Show", "Channel 2", 18, 30},
        {"Stand-up Comedy", "Channel 3", 19, 0},
        {"Movie Night", "Channel 1", 19, 30},
        {"Sports Highlights", "Channel 4", 20, 0},
        {"Mystery Series", "Channel 2", 20, 30},
        {"Music Hour", "Channel 3", 21, 0},
        {"Documentary Time", "Channel 1", 21, 30},
        {"Night News", "Channel 4", 22, 0},
        {"Late Night Movie", "Channel 2", 22, 30},
        {"All-Star Quiz", "Channel 3", 23, 0},
    };
    int n = sizeof(shows) / sizeof(shows[0]);

    time_t t;
    struct tm *tm_info;

    setenv("TZ", "Asia/Kolkata", 1);
    tzset();

    time(&t);
    tm_info = localtime(&t);
    int currentHour = tm_info->tm_hour;
    int currentMinute = tm_info->tm_min;

    printf("Current time: %02d:%02d\n", currentHour, currentMinute);

    int channelInput;
    printf("Enter the channel number (1, 2, or 3): ");
    scanf("%d", &channelInput);

    char channel[20];
    if (channelInput == 1) {
        strcpy(channel, "Channel 1");
    } else if (channelInput == 2) {
        strcpy(channel, "Channel 2");
    } else if (channelInput == 3) {
        strcpy(channel, "Channel 3");
    } else {
        printf("Invalid channel number entered.\n");
        return 1;
    }

    findNextShows(shows, n, channel, currentHour, currentMinute);

    return 0;
}