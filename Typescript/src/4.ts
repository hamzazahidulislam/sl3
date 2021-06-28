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

export const permissionFields = {
  canManageProducts: true,
  canManageProduct: false,
  canManageProducs: true,
  canManageProdus: false,
};

export type Permission = keyof typeof permissionFields;

export const permissionsList: Permission[] = Object.keys(
  permissionFields
) as Permission[];
console.log(permissionFields);
console.log(permissionsList);

//this is key value pairs
console.log(permissionsList.map((permission) => [permission, [permission]]));
//!! boolean return
console.log(!!permissionsList.pop());
if (permissionFields.canManageProducts) {
  console.log('canManageProducts');
}
console.log(!!permissionFields.canManageProducs);
