//Questão 2, porta OR em Rust

fn main() {
   let a:u8 = 1;
   let b:u8 = 0;
   let x:u8;
   
   x = !(a | b); //Negando a saida da porta OR
   println!("OR => {:0b} ", x);
}