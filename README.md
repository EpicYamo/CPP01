# CPP Module 01

Memory allocation, pointers versus references, file streams and member function pointers — the module where C habits are deliberately broken.

> Part of the **42 school curriculum**. Built by **Arda Aycan**.

## Exercises

| Exercise | Binary | What it demonstrates |
| --- | --- | --- |
| `ex00` | `brainzz` | A `Zombie` created on the stack and on the heap (`newZombie`, `randomChump`), demonstrating object lifetime and when to delete. |
| `ex01` | `more_brainzz` | A horde of zombies allocated in one `new[]` and destroyed with `delete[]`. |
| `ex02` | `hi_this_is_brain` | Prints the address of a string, a pointer to it and a reference to it — the classic pointer/reference comparison. |
| `ex03` | `violence` | `HumanA` holds a `Weapon` by reference, `HumanB` by pointer; shows when each is appropriate. |
| `ex04` | `replace` | A small `sed`: copies a file replacing every occurrence of one string with another, writing `<file>.replace`. |
| `ex05` | `the_harl` | Harl complains at four levels using an array of member function pointers. |

## Build and run

Every exercise has its own Makefile and produces its own binary:

```bash
make -C ex00
./ex00/brainzz
```

`make fclean -C <exercise>` removes the binary again.

## Notes

- C++98, `-Wall -Wextra -Werror`.
- `ex04` takes three arguments: input file, search string, replacement.

## Author

**Arda Aycan** ([@EpicYamo](https://github.com/EpicYamo)).
