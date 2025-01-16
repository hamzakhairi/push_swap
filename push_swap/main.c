/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 15:50:10 by hkhairi           #+#    #+#             */
/*   Updated: 2025/01/16 22:06:32 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void print_stack(t_push *stack, char stack_name)
{
    printf("Stack %c: ", stack_name);
    while (stack)
    {
        printf("{number : %d, index : %d } -> ", stack->number, stack->index);
        stack = stack->next;
    }
    printf("NULL\n");
}

// int stack_size(t_push *stack)
// {
//     int size = 0;

//     while (stack)
//     {
//         size++;
//         stack = stack->next;
//     }
//     return size;
// }

// void sort_to_mid(t_push **stack_a, t_push **stack_b)
// {
//     int size = stack_size(*stack_a);
//     int mid = size / 2;
//     t_push *top;

//     while (*stack_a)
//     {
//         top = *stack_a;
//         if (top->index < mid) // Place smaller numbers at the bottom
//         {
//             pb(stack_a, stack_b);
//             rrb(stack_b); // Rotate stack_b reverse to place smaller numbers at bottom
//             // printf("pb + rrb (index: %d)\n", top->index);
//             printf("pb\n");
//             printf("rrb\n");
//         }
//         else // Place larger numbers at the top
//         {
//             pb(stack_a, stack_b);
//             // printf("pb (index: %d)\n", top->index);
//             printf("pb\n");
//         }
//     }
// }
// -----------

// void sort(t_push **stack_a, t_push **stack_b)
// {
//     int chunk_size = 13;
//     int target = 0;
//     t_push *current;

//     while (*stack_a)
//     {
//         current = *stack_a;
//         if (current->index <= target)
//         {
//             pb(stack_a, stack_b); 
//             printf("pb\n");
//             target++;
//         }
//         else if (current->index <= (target + chunk_size))
//         {
//             pb(stack_a, stack_b);
//             rrb(stack_b); 
//             printf("pb\n");
//             printf("rb\n");
//             target++;
//         }
//         else
//         {
//             ra(stack_a);
//             printf("ra\n");
//         }
//     }
// }
// ------------

// void start_push_swap(t_push **stack_a, t_push **stack_b)
// {
//     if (!stack_a || !*stack_a || !(*stack_a)->next)
//         return;
    
//     // if (stack_size(*stack_a) <= 5)
//     //     small_stack_sort(stack_a, stack_b);
//     else 
//         sort(stack_a, stack_b);
// }



void ft_prohandler(t_push **list)
{
    int i = 0;
    int range = 13;
    t_push *stack_b = NULL;

    while (*list) // Loop until stack_a (*list) is empty
    {
        t_push *first = *list; // Always get the updated top of the list

        if (first->index <= i)
        {
            pb(list, &stack_b); // Push to stack_b
            printf("pb\n");
            i++;
        }
        else if (first->index <= (i + range))
        {
            pb(list, &stack_b); // Push to stack_b
            printf("pb\n");
            rb(&stack_b);       // Rotate stack_b
            printf("rb\n");
            i++;
        }
        else
        {
            ra(list); // Rotate stack_a
            printf("ra\n");
        }
    }
    // int i = 0;
    // t_push *stack_b = NULL;
    // t_push *first = *list;
    // int range = 13;
    
    // while (first)
    // {
    //     if (first->index <= i)
    //     {
    //         pb(&first, &stack_b);
    //         i++;
    //     }
    //     else if (first->index <= (i + range))
    //     {
    //         pb(&first, &stack_b);
    //         rb(&stack_b);
    //         i++;
    //     }
    //     else
    //     {
    //         ra(&first);
    //         first = *list;
    //     }
    // }
}


int main(int argc, char *argv[])
{
    t_push *a = NULL;
    // t_push *b = NULL;

    (void)argc;
    init_stack(&a, argv + 1);
    is_sort(a);

    // printf("Before start:\n");
    // print_stack(a, 'A');
    // print_stack(b, 'B');

    ft_prohandler(&a);

    // printf("After sort:\n");
    // print_stack(a, 'A');
    // print_stack(b, 'B');

    free_node(a);
    // free_node(b);
    return (0);
}
