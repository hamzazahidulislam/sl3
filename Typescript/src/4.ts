console.clear();
// let achivment: (string | number | boolean)[] = [1, 'coding'];

// achivment.push(false);

// let anything: { name: string; age: number } = JSON.parse(
//   '"name":"Hamza","age":19'
// );

// function something(msg: string): any {
//   return {
//     extra: msg,
//   };
// }

// let result: { extra: string } = something('i am a programmer');
// result = { extra: '' };
// console.log(result);

// export const permissionFields = {
//   canManageProducts: true,
//   canManageProduct: false,
//   canManageProducs: true,
//   canManageProdus: false,
// };

// export type Permission = keyof typeof permissionFields;

// export const permissionsList: Permission[] = Object.keys(
//   permissionFields
// ) as Permission[];
// console.log(permissionFields);
// console.log(permissionsList);

// //this is key value pairs
// console.log(permissionsList.map((permission) => [permission, [permission]]));
// //!! boolean return
// console.log(!!permissionsList.pop());
// if (permissionFields.canManageProducts) {
//   console.log('canManageProducts');
// }
// console.log(!!permissionFields.canManageProducs);
//Problem solving seerToMon by using function
function seerToMon(seer: Number) {
  if (seer <=0) {
    //Error Messsage here...
    return 'Invalid value for seer';
  }
  const mon = +seer / 40;
  return mon; // return function argument
}
const mySeer = 200;
const MonIs = seerToMon(mySeer); //func call
console.log('Mon is', MonIs);

function totalSales(shirt: Number, pant: Number, shoes: Number) {
  if (shirt <= 0 && pant <= 0 && shoes <= 0) {
    return 'give a valid value is greater then 0';
  }
  const shirtPrice = 100;
  const pantPrice = 200;
  const shoesPrice = 500;
  const shirtQuantity = shirtPrice * +shirt;
  const pantQuantity = pantPrice * +pant;
  const shoesQuantity = shoesPrice * +shoes;
  const total = shirtQuantity + pantQuantity + shoesQuantity;
  return total;
}
console.log(totalSales(1, 1, 1));

function deliveryCost(quantity: Number) {
  const firstPerProduct = 100; //for first 100 products
  const secondPerProduct = 80; //for second 100 products
  const thirdPerProduct = 50; //for greater then 200 products
  if (quantity <= 0) {
    return 'Invalid Quantity'; //this is error
  }
  if (quantity <= 100) {
    //this for 1 to 100 products
    const result = +quantity * firstPerProduct;
    return result;
  } else if (quantity <= 200) {
    //this for 101 to 200 products
    const previousProduct = 100 * firstPerProduct;
    const restProduct = +quantity - firstPerProduct;
    const secondPerProduct2 = restProduct * secondPerProduct;
    const totalQuantity = previousProduct + secondPerProduct2;
    return totalQuantity;
  } else {
    //this for greater then 200 products
    const previousProduct = 100 * 80;
    const previousProduct2 = 100 * 100;
    const restProduct = +quantity - 200;
    const secondPerProduct2 = restProduct * thirdPerProduct;
    const totalQuantity =
      previousProduct + secondPerProduct2 + previousProduct2;
    return totalQuantity;
  }
}
console.log(deliveryCost(201));

function perfectFriend(friends: Array<string>) {
  const firstFriend = friends;
  if (!friends.length) {
    return 'Empty List not accpeted';
  }
  if (typeof friends != 'undefined' && friends.length > 5) {
    return 'Empty List not accpeted';
  }
  for (let i = 0; i < friends.length; i++) {
    if (friends[i].length == 5) {
      return firstFriend[i];
    } else {
      return 'must be greater 5 character';
    }
  }
}
let names = ['react'];
console.log(perfectFriend(names));
