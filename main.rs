extern crate rand; 

use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main(){
    println!("Guess the number");

    let n = rand::thread_rng().gen_range(1, 101);
    println!("The secret number is {}", n);

    println!("Please input your guess");

    let mut g = String::new();
    io::stdin().read_line(&mut g).expect("Failed to read line");
    println!("You Guessed :{}",g);

    let p: i64 = g.trim().parse().unwrap();

    match p.cmp(&n){
        Ordering::Less => println!("Too small!"),
        Ordering::Equal => println!("Equal"),
        Ordering::Greater => println!("Greater"),
    }
}



