extern crate rand;
use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main(){
    let num = rand::thread_rng().gen_range(1, 101);
    let mut guess = String::new();
    loop{
        println!("Please input your guess: ");
        io::stdin().read_line(&mut guess).expect("Failed to read line");
        let guess: u64 = match guess.trim().parse(){
            Ok(num) => num,
            Err(_) => continue,
        };
        println!("Your guess = {}", guess);
        match guess.cmp(&num){
            Ordering::Less => println!("Too small"),
            Ordering::Greater => println!("Too Big"),
            Ordering::Equal => {
                println!("You Win");
                break;
            }
        }

    }
}



