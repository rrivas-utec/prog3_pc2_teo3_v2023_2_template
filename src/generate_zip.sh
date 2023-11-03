#!/usr/bin/env bash

project_name='prog3_pc2_teo3_v2023_2'
source_code='
  generate_sub_ranges.h
  count_diphthongs.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}