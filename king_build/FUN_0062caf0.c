
undefined * FUN_0062caf0(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  char cVar5;
  undefined *puVar6;
  char local_9;
  uint local_8;
  uint local_4;
  
  local_8 = DAT_0077a440;
  if (DAT_0077a42c < 0x7efb) {
    local_4 = 0;
  }
  else {
    local_4 = DAT_0077a42c - 0x7efa;
  }
  cVar5 = *(char *)((int)&DAT_00759df0 + (int)(DAT_0077a428 + DAT_0077a42c));
  puVar1 = &DAT_00759ef2 + DAT_0077a42c;
  local_9 = *(char *)((int)&DAT_00759df0 + (int)(DAT_0077a428 + (DAT_0077a42c - 1)));
  puVar6 = DAT_0077a428;
  if (DAT_0077a448 <= DAT_0077a428) {
    local_8 = DAT_0077a440 >> 2;
  }
  do {
    if ((((*(char *)((int)&DAT_00759df0 + (int)(puVar6 + param_1)) == cVar5) &&
         ((&DAT_00759def)[(int)(puVar6 + param_1)] == local_9)) &&
        (*(char *)((int)&DAT_00759df0 + param_1) == *(char *)((int)&DAT_00759df0 + DAT_0077a42c)))
       && (*(char *)((int)&DAT_00759df0 + param_1 + 1) ==
           *(char *)((int)&DAT_00759df0 + DAT_0077a42c + 1))) {
      pcVar3 = (char *)((int)&DAT_00759df0 + param_1 + 2);
      puVar4 = (undefined *)(DAT_0077a42c + 0x759df2);
      while (((((puVar2 = puVar4 + 1, puVar4[1] == pcVar3[1] &&
                (puVar2 = puVar4 + 2, puVar4[2] == pcVar3[2])) &&
               ((puVar2 = puVar4 + 3, puVar4[3] == pcVar3[3] &&
                ((puVar2 = puVar4 + 4, puVar4[4] == pcVar3[4] &&
                 (puVar2 = puVar4 + 5, puVar4[5] == pcVar3[5])))))) &&
              (puVar2 = puVar4 + 6, puVar4[6] == pcVar3[6])) &&
             (puVar2 = puVar4 + 7, puVar4[7] == pcVar3[7]))) {
        puVar2 = puVar4 + 8;
        pcVar3 = pcVar3 + 8;
        if ((puVar4[8] != *pcVar3) || (puVar4 = puVar2, puVar1 <= puVar2)) break;
      }
      puVar4 = puVar2 + (0x102 - (int)puVar1);
      if ((int)puVar6 < (int)puVar4) {
        if (DAT_0077a43c <= (int)puVar4) {
          DAT_0077a44c = param_1;
          return puVar4;
        }
        local_9 = *(char *)((int)&DAT_00759df0 +
                           (int)(puVar2 + DAT_0077a42c + (0x101 - (int)puVar1)));
        cVar5 = *(char *)((int)&DAT_00759df0 + (int)(puVar4 + DAT_0077a42c));
        puVar6 = puVar4;
        DAT_0077a44c = param_1;
      }
    }
    param_1 = (uint)*(ushort *)((int)&DAT_00739df0 + (param_1 & 0x7fff) * 2);
    if (param_1 <= local_4) {
      return puVar6;
    }
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      return puVar6;
    }
  } while( true );
}

