#![allow(warnings)]
#[allow(dead_code)]
use std::io;

fn rn() -> i32{
    let mut input = String::new();
    io::stdin().read_line(&mut input);
    input.trim().parse::<i32>().unwrap()
}

fn readvec(v: &mut Vec::<i32>) {
    let mut input = String::new();
    io::stdin().read_line(&mut input);
    let nums: Vec<&str> = input.split_whitespace().collect();
    
    for i in (0..nums.len()){
        v.push(nums[i].trim().parse::<i32>().unwrap());
    }
}

fn main(){
    let mut x = Vec::<i32>::new();
    readvec(&mut x);
    let y = rn();
    println!("y = {}", y);
    for i in (0..x.len()){
        print!("{}, ", x[i]);
    }
}