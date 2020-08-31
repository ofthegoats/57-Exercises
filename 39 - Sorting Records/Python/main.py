def main():
    employees = [
        {"fn": "John", "ln": "Johnson", "pos": "Manager", "sd": "2016-12-31"},
        {"fn": "Tou", "ln": "Xiong", "pos": "Software Engineer", "sd": "2016-10-05"},
        {
            "fn": "Michaela",
            "ln": "Michaelson",
            "pos": "District Manager",
            "sd": "2015-12-19",
        },
        {"fn": "Jake", "ln": "Jacobson", "pos": "Programmer", "sd": ""},
        {"fn": "Jacquelyn", "ln": "Jackson", "pos": "DBA", "sd": ""},
        {"fn": "Sally", "ln": "Weber", "pos": "Web Developer", "sd": "2015-12-18"},
    ]

    employees.sort(key=lambda x: x["ln"])
    print("{:<20} | {:<20} | {:<20}".format("Name", "Position", "Separation Date"))
    print(f"{'-'*20} | {'-'*20} | {'-'*20}")
    for i in employees:
        print(
            "{:<20} | {:<20} | {:<20}".format(
                i["fn"] + " " + i["ln"], i["pos"], i["sd"]
            )
        )


if __name__ == "__main__":
    main()
