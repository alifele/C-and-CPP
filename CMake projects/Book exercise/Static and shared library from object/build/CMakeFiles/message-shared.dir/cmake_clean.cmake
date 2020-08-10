file(REMOVE_RECURSE
  "libmessage-shared.pdb"
  "libmessage-shared.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/message-shared.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
