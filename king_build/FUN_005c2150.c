
int FUN_005c2150(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (DAT_00701f00 == (int *)0x0) {
    return -0x7fffbffb;
  }
  DAT_00701ed0 = 0;
  DAT_00701ecc = 0;
  DAT_00701ec8 = 0;
  (**(code **)(*DAT_00701f00 + 0x34))(DAT_00701f00,0);
  puVar4 = &stack0xfffffff0;
  uVar3 = DAT_00701ec4;
  iVar1 = (**(code **)(*DAT_00701f00 + 0x2c))
                    (DAT_00701f00,0,DAT_00701ec4,puVar4,&stack0xfffffff4,0,0,0);
  if (iVar1 < 0) {
    FUN_005d2250(s_msavi__Lock_the_buffer_down___fa_0067e688,iVar1);
    return iVar1;
  }
  FUN_005c2210(uVar3,puVar4);
  uVar2 = 0;
  (**(code **)(*DAT_00701f00 + 0x4c))(DAT_00701f00,uVar3,puVar4,0,0);
  DAT_00701ed0 = uVar2 % DAT_00701ec4;
  return 0;
}

