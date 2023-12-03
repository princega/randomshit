#![allow(warnings)]
#[allow(dead_code)]
use std::io;
use std::thread;
use std::time::Duration; 
fn main(){
    let str1: &str  = "On the ";
    let str2: &str  = "day of christmas my true love sent to me";

    let data: Vec<&str> = vec!["A partidge in a pear tree", "Two turtle Doves", "Three French Hens", "four calling birds", 
    "five gold rings", "six geese a-laying", "seven swans a-swimming", "Eight maids a-milking", 
    "nine ladies dancing", "ten lords a-leaping", "eleven pipers piping", "twelve drummers drumming"];

    let bet: Vec<&str> = vec!["First", "second", "third", "fourth", "fifth", "sixth", 
    "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"];

   for i in (0..12){
       thread::sleep(Duration::from_secs(3));
       println!();
       println!("{}{} {}",str1, bet[i], str2);
       for j in (0..i+1).rev(){
           if j==0 && i>0{
               println!("and {}",data[j]);}
            else {
            println!("{}", data[j]);
                }
       }
   }
}




