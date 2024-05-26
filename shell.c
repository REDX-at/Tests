/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:47:51 by aitaouss          #+#    #+#             */
/*   Updated: 2024/02/16 17:39:15 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <readline/readline.h>
// #include <readline/history.h>

// int main() {
//     char* input;

//     // Read a line of text from the user
//     input = readline("Enter some text: ");

//     // Check if the input is not NULL
//     if (input != NULL) {
//         // Display the input
//         printf("You entered: %s\n", input);

//         // Add the input to the history
//         add_history(input);

//         // Force the line to be updated and redisplayed
//         rl_forced_update_display();
//         printf("\n");
//         // Free the memory allocated by readline
//         free(input);
//     }
//     clear_history();
//     return 0;
// }

#include <unistd.h>
#include <stdio.h>

int main() {
    char cwd[1024]; // Buffer to store the current working directory

    // Attempt to get the current working directory
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd");
        return 1; // Return an error code
    }

    return 0; // Return success
}