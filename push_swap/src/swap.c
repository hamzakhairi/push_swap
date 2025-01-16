/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:22:25 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/16 15:24:47 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void sa(t_push **stack_a) {
    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return; // Do nothing if there are fewer than 2 elements

    t_push *first = *stack_a;
    t_push *second = first->next;

    first->next = second->next;
    second->next = first;
    *stack_a = second;
}

void sb(t_push **stack_b) {
    sa(stack_b); // Same logic as `sa` but operates on `stack_b`
}

// Input: Stack B: 5 -> 7 -> NULL
// Output: Stack B: 7 -> 5 -> NULL

void ss(t_push **stack_a, t_push **stack_b) {
    sa(stack_a);
    sb(stack_b);
}

// Input: Stack A: 3 -> 4 -> 1 -> NULL
//        Stack B: 5 -> 7 -> NULL
// Output: Stack A: 4 -> 3 -> 1 -> NULL
//         Stack B: 7 -> 5 -> NULL

void pa(t_push **stack_a, t_push **stack_b) {
    if (!stack_b || !*stack_b)
        return; // Do nothing if stack B is empty

    t_push *temp = *stack_b;
    *stack_b = temp->next;
    temp->next = *stack_a;
    *stack_a = temp;
}

// Input: Stack A: 3 -> 4 -> NULL
//        Stack B: 5 -> 7 -> NULL
// Output: Stack A: 5 -> 3 -> 4 -> NULL
//         Stack B: 7 -> NULL

void pb(t_push **stack_a, t_push **stack_b) {
    pa(stack_b, stack_a); // Reverse of `pa`
}

// Input: Stack A: 3 -> 4 -> NULL
//        Stack B: 5 -> 7 -> NULL
// Output: Stack A: 4 -> NULL
//         Stack B: 3 -> 5 -> 7 -> NULL

void ra(t_push **stack_a) {
    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return;

    t_push *first = *stack_a;
    t_push *temp = *stack_a;

    while (temp->next)
        temp = temp->next;

    *stack_a = first->next;
    temp->next = first;
    first->next = NULL;
}

// Input: Stack A: 3 -> 4 -> 1 -> NULL
// Output: Stack A: 4 -> 1 -> 3 -> NULL

void rb(t_push **stack_b) {
    ra(stack_b); // Same as `ra` but for `stack_b`
}

// Input: Stack B: 5 -> 7 -> NULL
// Output: Stack B: 7 -> 5 -> NULL

void rr(t_push **stack_a, t_push **stack_b) {
    ra(stack_a);
    rb(stack_b);
}

// Input: Stack A: 3 -> 4 -> 1 -> NULL
//        Stack B: 5 -> 7 -> NULL
// Output: Stack A: 4 -> 1 -> 3 -> NULL
//         Stack B: 7 -> 5 -> NULL


void rra(t_push **stack_a) {
    if (!stack_a || !*stack_a || !(*stack_a)->next)
        return;

    t_push *prev = NULL;
    t_push *current = *stack_a;

    while (current->next) {
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
    current->next = *stack_a;
    *stack_a = current;
}

// Input: Stack A: 3 -> 4 -> 1 -> NULL
// Output: Stack A: 1 -> 3 -> 4 -> NULL


void rrb(t_push **stack_b) {
    rra(stack_b); // Same as `rra` but for `stack_b`
}

// Input: Stack B: 5 -> 7 -> NULL
// Output: Stack B: 7 -> 5 -> NULL

void rrr(t_push **stack_a, t_push **stack_b) {
    rra(stack_a);
    rrb(stack_b);
}

// Input: Stack A: 3 -> 4 -> 1 -> NULL
//        Stack B: 5 -> 7 -> NULL
// Output: Stack A: 1 -> 3 -> 4 -> NULL
//         Stack B: 7 -> 5 -> NULL




// void start_push_swap(t_push **stack_a, t_push **stack_b)
// {
//     if (!stack_a || !*stack_a || !(*stack_a)->next)
//         return;
//     int nb = (*stack_a)->number;
//     // while (!is_sort(*stack_a))
//     while (*stack_a)
//     {
//         printf("-----> %d < %d <-----\n",(*stack_a)->number, (*stack_a)->next->number);
//         if ((*stack_a)->number < (*stack_a)->next->number)
//         {
//             ra(stack_a);
//         }
//         else
//             pb(stack_a, stack_b);
//         printf("==========\n");
//         print_stack(*stack_a, 'A');
//         print_stack(*stack_b, 'B');
//         printf("==========\n");

//         if ((*stack_a)->number == nb)
//             break;
//     }
   
// }

// void start_push_swap(t_push **stack_a, t_push **stack_b)
// {
//     if (!stack_a || !*stack_a || !(*stack_a)->next)
//         return;

//     while (!is_sort(*stack_a)) // Ensure the sorting continues until stack_a is sorted
//     {
//         if ((*stack_a)->number > (*stack_a)->next->number) // Swap if necessary
//         {
//             sa(stack_a);
//             printf("sa\n");
//         }
//         else
//         {
//             pb(stack_a, stack_b); // Push the smallest element to stack_b
//             printf("pb\n");
//         }

//         // printf("==========\n");
//         // print_stack(*stack_a, 'A');
//         // print_stack(*stack_b, 'B');
//         // printf("==========\n");
//     }

//     while (*stack_b) // Push elements back to stack_a
//     {
//         pa(stack_a, stack_b);
//         printf("pa\n");
//         // printf("==========\n");
//         // print_stack(*stack_a, 'A');
//         // print_stack(*stack_b, 'B');
//         // printf("==========\n");
//     }
// }


 // while (*stack_b)
    // {
    //     printf("==========\n");
    //     print_stack(*stack_a, 'A');
    //     print_stack(*stack_b, 'B');
    //     printf("==========\n");
    //     pa(stack_a, stack_b);
    // }