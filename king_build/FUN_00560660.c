
uint __thiscall FUN_00560660(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 3000);
  if (param_2 <= (int)uVar1) {
    return CONCAT22((short)(uVar1 - param_2 >> 0x10),
                    *(undefined2 *)(param_1 + (uVar1 - param_2) * 2));
  }
  return uVar1 & 0xffff0000;
}

