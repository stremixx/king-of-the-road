
void FUN_004b8bc0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_100 [256];
  
  iVar4 = 1;
  DAT_00695174 = 0;
  bVar1 = true;
  piVar3 = &DAT_00694868;
  do {
    FUN_0061c369(local_100,&DAT_0067154c,s_crPart_00671554,iVar4);
    iVar2 = FUN_004c4750(local_100,DAT_00695160);
    *piVar3 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      DAT_00695174 = DAT_00695174 + 1;
      *(undefined4 *)(iVar2 + 0x28) = 0xf9;
      *(uint *)(*piVar3 + 0x20) = *(uint *)(*piVar3 + 0x20) | 0x1000;
      *(uint *)(*piVar3 + 0x20) = *(uint *)(*piVar3 + 0x20) | 0x40000;
      iVar4 = iVar4 + 1;
      *(uint *)(*piVar3 + 0x20) = *(uint *)(*piVar3 + 0x20) | 0x200;
      piVar3 = piVar3 + 1;
    }
    if (DAT_00695174 == 0) {
      FUN_005d2520(s_Can_t_find_material_crpart_in_mo_0067151c,0);
    }
  } while (bVar1);
  return;
}

