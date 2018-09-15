# Instructions are specific to Unreal Engine coding standards but not related to C++
1. Arrays should always be prefixed with T, ex. Map is aliased as TMap => #define TMap std::map 
2. String should be aliased with F, ex. string is aliased as FString => using FString = std::string
3. Same as point 2 for int as well but no suffix is required, ex. int aliased as int32 => using int32 = int
4. Classes created should be prefixed with F, ex. Helper class is set to FHelper
5. Getter methods should be set to const
6. Any static string should be set to constexpre with capital letters