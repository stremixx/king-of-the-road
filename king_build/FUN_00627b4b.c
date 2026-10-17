
uint FUN_00627b4b(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00627b96();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_00627c28(uVar1);
  return uVar1;
}

