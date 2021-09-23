package com.SpringBasic.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

@Controller
public class WebController {


    @RequestMapping(value = "/basic",method = RequestMethod.GET)
    public String basic() {
        return "basic";
    }



}

